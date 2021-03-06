/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewController : UITableViewController <MKPlaceAttributionCellProvider, MKPlaceReviewsViewCheckInWriteCellDelegate, MKStackingViewControllerPreferredSizeUse> {
    NSMutableDictionary *_cachedMaskedImages;
    BOOL _hasAttribution;
    MKMapItem *_mapItem;
    ABMonogrammer *_monogrammer;
    _MKPlaceViewController *_owner;
    GEORating *_rating;
    <MKPlaceCardReviewsControllerDelegate> *_reviewsControllerDelegate;
    BOOL _showAttribution;
    BOOL _showCheckInAndWriteReviewButtons;
    BOOL _showMoreReviewsButton;
    NSMutableArray *_viewDidAppearBlocks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAttribution;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) ABMonogrammer *monogrammer;
@property (nonatomic) _MKPlaceViewController *owner;
@property (nonatomic, retain) GEORating *rating;
@property (nonatomic, readonly) BOOL requiresPreferredContentSizeInStackingView;
@property (nonatomic) <MKPlaceCardReviewsControllerDelegate> *reviewsControllerDelegate;
@property (nonatomic) BOOL showAttribution;
@property (nonatomic, readonly) BOOL showAttributionButtons;
@property (nonatomic) BOOL showCheckInAndWriteReviewButtons;
@property (nonatomic) BOOL showMoreReviewsButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *viewDidAppearBlocks;

- (void).cxx_destruct;
- (void)_showReviewWithID:(id)arg1;
- (void)_viewAllReviews;
- (void)checkInWriteReviewCellDidSelectCheckIn:(id)arg1;
- (void)checkInWriteReviewCellDidSelectWriteReview:(id)arg1;
- (BOOL)hasAttribution;
- (id)init;
- (id)mapItem;
- (id)monogrammer;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)owner;
- (id)rating;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (id)reviewsControllerDelegate;
- (void)setHasAttribution:(BOOL)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMonogrammer:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setReviewsControllerDelegate:(id)arg1;
- (void)setShowAttribution:(BOOL)arg1;
- (void)setShowCheckInAndWriteReviewButtons:(BOOL)arg1;
- (void)setShowMoreReviewsButton:(BOOL)arg1;
- (void)setViewDidAppearBlocks:(id)arg1;
- (BOOL)showAttribution;
- (BOOL)showAttributionButtons;
- (BOOL)showCheckInAndWriteReviewButtons;
- (BOOL)showMoreReviewsButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (id)viewDidAppearBlocks;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
