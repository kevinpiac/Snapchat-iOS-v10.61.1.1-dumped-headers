//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@class NSDictionary, NSString, SCEventListenerAnnouncer, SCGeoFilter, SCGeoFilterView, SCLens, SCScanCardButton, SCUserSession, UIActivityIndicatorView, UIImage, UIImageView, UILabel, UIView;

@interface SCScanCardUnlockFilter : SCScanCardTableViewCell
{
    UIImageView *_imageView;
    _Bool _filterPictureLoaded;
    struct CGSize _imageCroppedSize;
    UIImageView *_thumbnailImageView;
    UIImage *_filterImage;
    UILabel *_fullNameLabel;
    _Bool _addedFilter;
    NSString *_filterId;
    NSString *_filterCardTitle;
    SCGeoFilter *_filter;
    SCScanCardButton *_unlockFilterButton;
    NSString *_scanData;
    SCLens *_companionLens;
    SCScanCardButton *_cancelButton;
    UIView *_secondaryTitle;
    double _cardHeightAfterFilterLoad;
    UIView *_headerBackgroundView;
    _Bool _sendingUnlockRequest;
    _Bool _openFromPreview;
    NSString *_unlockDurationMessage;
    _Bool _isDismissed;
    NSString *_scannableId;
    int _version;
    NSDictionary *_unlockProperties;
    SCUserSession *_userSession;
    SCGeoFilterView *_geoFilterView;
    SCEventListenerAnnouncer *_eventAnnouncer;
    UIActivityIndicatorView *_imageLoadingIndicatorView;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_copyImage:(id)arg1;
- (void)_didTapActionButton:(id)arg1;
- (void)_dismissCardView;
- (void)_launchLensView;
- (void)_makeConstraintsForGeoFilterView:(id)arg1;
- (void)_setUpFilterViewForGeoFilter:(id)arg1;
- (void)_setupFilterImageWithCropping:(_Bool)arg1 imageData:(id)arg2;
- (void)_showFailureMessage;
- (void)_startLoading;
- (void)_stopLoading;
- (void)addListener:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *imageLoadingIndicatorView; // @synthesize imageLoadingIndicatorView=_imageLoadingIndicatorView;
- (id)initWithTitle:(id)arg1 geofilter:(id)arg2 scanData:(id)arg3 companionLens:(id)arg4 unlockDurationMessage:(id)arg5 userSession:(id)arg6 scannableId:(id)arg7 version:(int)arg8 unlockProperties:(id)arg9;
- (void)removeListener:(id)arg1;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)updateStyle;

@end

