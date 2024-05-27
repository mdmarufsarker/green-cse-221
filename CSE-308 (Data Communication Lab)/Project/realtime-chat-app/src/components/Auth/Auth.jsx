import { useState } from "react";
import { toast } from "react-toastify";
import "./Auth.css";

const Auth = () => {
  const [isRegistered, setIsRegistered] = useState(true);
  const handleRegisterClick = () => {
    setIsRegistered(false);
  };

  const handleLoginClick = () => {
    setIsRegistered(true);
  };

  return (
    <div>
      {isRegistered ? (
        <Login onRegisterClick={handleRegisterClick} />
      ) : (
        <Register onLoginClick={handleLoginClick} />
      )}
    </div>
    // const [avatar, setAvatar] = useState({
    //   file: null,
    //   url: "",
    // });

    // const handleAvatar = (e) => {
    //   if (e.target.files[0]) {
    //     setAvatar({
    //       file: e.target.files[0],
    //       url: URL.createObjectURL(e.target.files[0]),
    //     });
    //   }
    // };

    // const handleLogin = (e) => {
    //   e.preventDefault();
    //   const email = e.target.email.value;
    //   const password = e.target.password.value;
    //   if (!email || !password) {
    //     return toast.error("Please fill all the fields");
    //   }

    //   e.target.reset();
    // };

    // const handleRegister = (e) => {
    //   e.preventDefault();
    //   // const usr = e.target.username.value;
    //   // const pass = e.target.password.value;
    //   // const pp = e.target.avatar.files[0];
    //   // if (!usr || !pass || !pp) {
    //   //   return toast.error("Please fill all the fields");
    //   // }

    //   const formData = new FormData(e.target);
    //   const { username, password, avatar } = Object.fromEntries(formData);
    //   console.log(username);
    //   // e.target.reset();
    // };
  );

  // return (
  //   <div className="login">
  //     <div className="item">
  //       <h2>Welcome back,</h2>
  //       <form onSubmit={handleLogin}>
  //         <input type="text" placeholder="Enter your email" name="email" />
  //         <input
  //           type="password"
  //           placeholder="Enter your password"
  //           name="password"
  //         />
  //         <button>Sign In</button>
  //         <div className="register">
  //           <span>Don't have an account?</span>
  //           <button onClick={on}></button>
  //         </div>
  //       </form>
  //     </div>
  //     {/* <div className="separator"></div>
  //     <div className="item">
  //       <h2>Create an Account</h2>
  //       <form onSubmit={handleRegister}>
  //         <input
  //           type="text"
  //           placeholder="Enter your username"
  //           name="username"
  //         />
  //         <input type="text" placeholder="Enter your email" name="email" />
  //         <input
  //           type="password"
  //           placeholder="Enter your password"
  //           name="password"
  //         />
  //         <label htmlFor="file">
  //           <img src={avatar.url || "./avatar.png"} alt="" />
  //           Upload an image
  //         </label>
  //         <input
  //           type="file"
  //           name=""
  //           id="file"
  //           style={{ display: "none" }}
  //           onChange={handleAvatar}
  //         />
  //         <button>Sign Up</button>
  //       </form>
  //     </div> */}
  //   </div>
  // );
};

function Login({ onRegisterClick }) {
  const handleLogin = (e) => {
    e.preventDefault();
    const email = e.target.email.value;
    const password = e.target.password.value;
    if (!email || !password) {
      return toast.error("Please fill all the fields");
    }

    e.target.reset();
  };
  return (
    <div className="login">
      <div className="item">
        <h2>Welcome back,</h2>
        <form onSubmit={handleLogin}>
          <input type="text" placeholder="Enter your email" name="email" />
          <input
            type="password"
            placeholder="Enter your password"
            name="password"
          />
          <button className="signIn">Sign In</button>
          <p>
            Not registered yet?{" "}
            <button onClick={onRegisterClick}>Register</button>
          </p>
        </form>
      </div>
    </div>
  );
}

function Register({ onLoginClick }) {
  const [avatar, setAvatar] = useState({
    file: null,
    url: "",
  });

  const handleAvatar = (e) => {
    if (e.target.files[0]) {
      setAvatar({
        file: e.target.files[0],
        url: URL.createObjectURL(e.target.files[0]),
      });
    }
  };
  const handleRegister = (e) => {
    e.preventDefault();
    // const usr = e.target.username.value;
    // const pass = e.target.password.value;
    // const pp = e.target.avatar.files[0];
    // if (!usr || !pass || !pp) {
    //   return toast.error("Please fill all the fields");
    // }

    const formData = new FormData(e.target);
    const { username, password, avatar } = Object.fromEntries(formData);
    console.log(username);
    // e.target.reset();
  };
  return (
    <div className="login">
      <div className="item">
        <h2>Create an Account</h2>
        <form onSubmit={handleRegister}>
          <input
            type="text"
            placeholder="Enter your username"
            name="username"
          />
          <input type="text" placeholder="Enter your email" name="email" />
          <input
            type="password"
            placeholder="Enter your password"
            name="password"
          />
          <label htmlFor="file">
            <img src={avatar.url || "./avatar.png"} alt="" />
            Upload an image
          </label>
          <input
            type="file"
            name=""
            id="file"
            style={{ display: "none" }}
            onChange={handleAvatar}
          />
          <button className="signUp">Sign Up</button>
          <p>
            Already registered? <button onClick={onLoginClick}>Login</button>
          </p>
        </form>
      </div>
    </div>
  );
}

export default Auth;
