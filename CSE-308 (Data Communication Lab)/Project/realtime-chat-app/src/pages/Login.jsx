import React from "react";
import Avatar from "../assets/avatar.png";

const Login = () => {
  return (
    <>
      <div className="formContainer">
        <div className="formWrapper">
          <span className="logo">Realtime Chat App</span>
          <span className="title">Login Here</span>
          <form action="">
            <input type="email" name="" id="" placeholder="Email" />
            <input type="password" name="" id="" placeholder="Password" />
            <button>Sign in</button>
          </form>
          <p>You don't have an account? Register</p>
        </div>
      </div>
    </>
  );
};

export default Login;
