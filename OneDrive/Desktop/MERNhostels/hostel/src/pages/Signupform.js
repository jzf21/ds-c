import React from 'react'
import { Populars } from '../components/Populars'

export const Signupform = () => {
  return (
    <div class="container">
    <div class="card1 signup mx-5">
      <div class="card_title">
        <h1>Create Account</h1>
        <span>Already have an account? <a href="login">Sign In</a></span>
      </div>
      <div name='signup' class="form" >
      <form action="/" method="post" data-netlify="true" data-netlify-recaptcha="true">
        <input type="text" name="username" id="username" placeholder="UserName" />
        <input type="email" name="email" placeholder="Email" id="email" />
        <input type="password" name="password" placeholder="Password" id="password" />
        <button className='mt-3' type='submit'>Sign Up</button>
        </form>
      </div>
      <div class="card_terms">
          <input type="checkbox" name="" id="terms"/> <span>I have read and agree to the <a href="">Terms of Service</a></span>
          
  <div data-netlify-recaptcha="true"></div>
  
      </div>
    </div>
  </div>
  )
}
