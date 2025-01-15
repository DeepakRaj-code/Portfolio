const quizData = [
    {
      question: "What is the capital of France?",
      options: ["Paris", "London", "Berlin", "Madrid"],
      answer: "Paris"
    },
    {
      question: "Which planet is known as the Red Planet?",
      options: ["Earth", "Mars", "Jupiter", "Saturn"],
      answer: "Mars"
    },
    {
      question: "Who wrote 'Romeo and Juliet'?",
      options: ["Shakespeare", "Dickens", "Hemingway", "Tolstoy"],
      answer: "Shakespeare"
    },
    {
      question: "What is the boiling point of water?",
      options: ["90°C", "100°C", "110°C", "120°C"],
      answer: "100°C"
    }
  ];
  
  const quizContainer = document.getElementById("quiz");
  const submitButton = document.getElementById("submit");
  const scoreContainer = document.getElementById("score");
  
  // Render quiz questions
  function renderQuiz() {
    quizData.forEach((data, index) => {
      const questionElement = document.createElement("div");
      questionElement.classList.add("question");
  
      questionElement.innerHTML = `
        <h3>${index + 1}. ${data.question}</h3>
        ${data.options
          .map(
            (option, i) =>
              `<label>
                <input type="radio" name="q${index}" value="${option}">
                ${option}
              </label>`
          )
          .join("<br>")}
      `;
      quizContainer.appendChild(questionElement);
    });
  }
  
  // Calculate and display score
  function calculateScore() {
    let score = 0;
    quizData.forEach((data, index) => {
      const selectedOption = document.querySelector(
        'input[name="q${index}"]:checked'
      );
      if (selectedOption && selectedOption.value === data.answer) {
        score++;
      }
    });
    scoreContainer.innerHTML = 'Your Score: ${score} / ${quizData.length}';
    scoreContainer.classList.remove("hidden");
  }
  
  submitButton.addEventListener("click", calculateScore);
  
  // Initialize the quiz
  renderQuiz();
  