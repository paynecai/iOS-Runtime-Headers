/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSIdentityProviderRequestOperation : VSAsyncOperation {
    VSIdentityProviderController * _controller;
    <VSIdentityProviderControllerDelegate> * _controllerDelegate;
    VSIdentityProvider * _identityProvider;
    VSIdentityProviderRequest * _request;
    VSOptional * _result;
}

@property (nonatomic, retain) VSIdentityProviderController *controller;
@property (nonatomic) <VSIdentityProviderControllerDelegate> *controllerDelegate;
@property (nonatomic, readonly) VSIdentityProvider *identityProvider;
@property (nonatomic, readonly, copy) VSIdentityProviderRequest *request;
@property (nonatomic, retain) VSOptional *result;

- (void).cxx_destruct;
- (id)controller;
- (id)controllerDelegate;
- (void)executionDidBegin;
- (id)identityProvider;
- (id)init;
- (id)initWithIdentityProvider:(id)arg1 request:(id)arg2;
- (id)request;
- (id)result;
- (void)setController:(id)arg1;
- (void)setControllerDelegate:(id)arg1;
- (void)setResult:(id)arg1;

@end
