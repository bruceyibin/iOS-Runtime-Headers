/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDProtection : NSObject <NSCopying> {
    bool mHidden;
    bool mLocked;
}

+ (id)protectionWithHidden:(bool)arg1 locked:(bool)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithHidden:(bool)arg1 locked:(bool)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToProtection:(id)arg1;
- (bool)isHidden;
- (bool)isLocked;

@end
