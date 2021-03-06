/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {
    BOOL _cancelled;
    GEORequester *_requester;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) GEORequester *requester;
@property (readonly) Class superclass;

- (void)cancelProviderRequest;
- (void)cleanupRequester;
- (void)dealloc;
- (id)requester;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)startProviderWithRequest:(id)arg1;

@end
