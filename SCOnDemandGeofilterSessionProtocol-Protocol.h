//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, MGLMapView, NSArray, NSString, SCMapCamera, SCOnDemandGeofilterCreativeData, SCOnDemandGeofilterDataController, SCOnDemandGeofilterEventsLogger, SCOnDemandGeofilterEventsManager, SCOnDemandGeofilterMapboxItem, SCOnDemandLensTemplateModel, SCUserSession, SOJUSticker, SOJUUnlockablesOndemandCreateHomeFilterRequest, SOJUUnlockablesOndemandLineItem, SOJUUnlockablesOndemandTemplateCategory, UIView, UIViewController;
@protocol SCBitmojiManagerProtocol, SCMapInstance, SCOnDemandGeofilterLayoutProvider, SCOnDemandGeofilterNetworkingProtocol, SCOnDemandLensAllTimeHitsTemplateDataStoreProtocol, SCOnDemandLensViewControllerProtocol, SCStickerProtocol;

@protocol SCOnDemandGeofilterSessionProtocol <NSObject>
- (id <SCStickerProtocol>)SCStickerFromSOJUSticker:(SOJUSticker *)arg1;
- (void)avatarCurrentPersonWithCompletion:(void (^)(UIImage *))arg1;
- (id <SCBitmojiManagerProtocol>)bitmojiManager;
- (_Bool)businessGeofiltersEnabled;
- (void)cleanSessionEventData;
- (void)cleanSessionGeofilterRelatedInfo;
@property(retain, nonatomic) SOJUUnlockablesOndemandCreateHomeFilterRequest *createHomeFilterRequest;
@property(retain, nonatomic) SCOnDemandGeofilterCreativeData *creativeData;
- (SCOnDemandGeofilterDataController *)dataController;
- (void)dismissStickerPicker;
- (NSArray *)entryViewControllers;
- (SCOnDemandGeofilterEventsManager *)eventsManager;
- (unsigned long long)filterType;
@property(nonatomic) double homeFilterTimeBetweeenAddressUpdates;
- (void)imageForSticker:(id <SCStickerProtocol>)arg1 completion:(void (^)(UIImage *))arg2;
- (UIViewController *)initialViewController;
- (UIViewController *)initialViewControllerWithCreateYourOwnFromMainCarousel:(_Bool)arg1;
@property(nonatomic, getter=isFirstTimeAccessMap) _Bool firstTimeAccessMap;
@property(nonatomic, getter=isNewUser) _Bool newUser;
- (id <SCOnDemandGeofilterLayoutProvider>)layoutProvider;
@property(retain, nonatomic) SCOnDemandLensTemplateModel *lensReviewTemplateModel;
@property(retain, nonatomic) SOJUUnlockablesOndemandLineItem *lineItem;
- (SCOnDemandGeofilterEventsLogger *)logger;
@property(nonatomic) struct CLLocationCoordinate2D mapCenterCoordinate;
- (_Bool)mapViewHasBeenShownForUser;
- (_Bool)mapViewTooltipWasShown;
- (MGLMapView<SCMapInstance> *)mapViewWithFrame:(struct CGRect)arg1;
- (id <SCOnDemandGeofilterNetworkingProtocol>)networkManager;
- (id <SCOnDemandLensAllTimeHitsTemplateDataStoreProtocol>)onDemandLensAllTimeHitsTemplateDataStore;
- (UIViewController<SCOnDemandLensViewControllerProtocol> *)onDemandLensViewControllerWithTemplateCategory:(SOJUUnlockablesOndemandTemplateCategory *)arg1 carouselParentView:(UIView *)arg2;
- (_Bool)onboardingScreenForHomeFilterWasShown;
- (_Bool)personalGeofiltersEnabled;
- (void)presentStickerPickerFromView:(UIView *)arg1 belowSubview:(UIView *)arg2 completion:(void (^)(_Bool, id, struct CGPoint, UIImage *))arg3;
@property(retain, nonatomic) SCOnDemandGeofilterMapboxItem *sessionLastSearchedMapboxItem;
@property(retain, nonatomic) SCMapCamera *sessionMapCamera;
- (void)setEntryViewControllers:(NSArray *)arg1;
- (void)setFilterType:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *tosVersion;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (_Bool)templateTooltipWasShown;
- (void)updateLineItemLocale;
- (void)updateLineItemWithGeofilterName:(NSString *)arg1;
- (void)updateLineItemWithUsageType:(long long)arg1;
- (NSString *)userAgentHeader;
- (NSString *)userBitmojiId;
- (NSString *)userEmail;
- (CLLocation *)userLocation;
- (SCUserSession *)userSession;
@end

