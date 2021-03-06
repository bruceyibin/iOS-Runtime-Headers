/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIShareInvitationRemoteViewController : _UIRemoteViewController <_UIShareInvitationViewControllerHost> {
    NSExtension *_extension;
    <NSCopying><NSObject> *_extensionRequestIdentifier;
    _UISharingViewController *_publicController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, copy) <NSCopying><NSObject> *extensionRequestIdentifier;
@property (readonly) unsigned int hash;
@property (nonatomic) _UISharingViewController *publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)_dismissViewController;
- (void)_performAuxiliaryActionWithCompletion:(id /* block */)arg1;
- (void)_performHeaderActionWithCompletion:(id /* block */)arg1;
- (void)_shareDidChange;
- (void)_shareWasMadePrivate;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (id)extension;
- (id)extensionRequestIdentifier;
- (void)invalidate;
- (id)publicController;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setPublicController:(id)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
