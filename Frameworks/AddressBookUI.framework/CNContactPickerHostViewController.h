/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerContentViewController, CNContactPickerHostProtocol> {
    void *_addressBook;
    <NSCopying> *_currentRequestIdentifier;
    <CNContactPickerContentDelegate> *_delegate;
    NSExtension *_extension;
}

@property void*addressBook;
@property (nonatomic, retain) <NSCopying> *currentRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property <CNContactPickerContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)contactPickerExtension;
+ (id)contextForIdentifier:(id)arg1;
+ (BOOL)getViewController:(id /* block */)arg1;

- (void).cxx_destruct;
- (void*)addressBook;
- (id)currentRequestIdentifier;
- (void)dealloc;
- (id)delegate;
- (id)extension;
- (void)invalidate;
- (void)pickerDidCancel;
- (void)pickerDidSelectContactWithRecordID:(int)arg1 vCardData:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(int)arg4;
- (void)setAddressBook:(void*)arg1;
- (void)setCurrentRequestIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;

@end
