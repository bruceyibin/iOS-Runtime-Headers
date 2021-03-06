/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAMessage : NSObject {
    NSError *_error;
    NSDictionary *_payload;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSDictionary *payload;

+ (id)messageWithPayload:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithPayload:(id)arg1;
- (id)payload;
- (void)setError:(id)arg1;
- (void)setPayload:(id)arg1;

@end
