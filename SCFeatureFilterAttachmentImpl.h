//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureFilterAttachment-Protocol.h"
#import "SCFilterAttachmentOperaControllerProtocol-Protocol.h"

@class NSString, SCExpandedButton, SCExperimentManager, SCFeatureReference, SCFilterAttachmentOperaController, SCPreviewConfiguration, SCPreviewView, SCSmartCarouselFilterArranger, SCUnlockableGeoFilterTracker, SCUserSession, SOJUUnlockablesAttachment;
@protocol SCPreviewFeatureFilterAttachmentDelegate><SCPreviewFeatureParentViewControllerAccessing;

@interface SCFeatureFilterAttachmentImpl : SCFeature <SCFeatureFilterAttachment, SCFilterAttachmentOperaControllerProtocol>
{
    SCPreviewView *_previewView;
    SCUserSession *_userSession;
    SCFeatureReference *_swipeFilters;
    SCSmartCarouselFilterArranger *_filterArranger;
    SCExperimentManager *_experimentManager;
    SCPreviewConfiguration *_previewConfiguration;
    SCExpandedButton *_filterAttachmentButton;
    SOJUUnlockablesAttachment *_displayedAttachment;
    NSString *_filterId;
    SCFilterAttachmentOperaController *_operaController;
    SCUnlockableGeoFilterTracker *_geofilterTracker;
    id <SCPreviewFeatureFilterAttachmentDelegate><SCPreviewFeatureParentViewControllerAccessing> _delegate;
}

- (void).cxx_destruct;
- (struct CGRect)_buttonFrameForSwipeOffset:(double)arg1 buttonSize:(struct CGSize)arg2;
- (id)_ctaStringForAttachment:(id)arg1;
- (void)_filterAttachmentButtonPressed;
- (void)_setupFilterAttachmentButton;
- (void)_updateButtonContentAndConstraints;
- (void)configureWithView:(id)arg1;
@property(nonatomic) __weak id <SCPreviewFeatureFilterAttachmentDelegate><SCPreviewFeatureParentViewControllerAccessing> delegate; // @synthesize delegate=_delegate;
- (void)filterAttachmentOperaControllerDidDismiss:(id)arg1;
- (void)filterAttachmentOperaControllerDidOpen:(id)arg1;
- (id)initWithUserSession:(id)arg1 swipeFilters:(id)arg2 filterArranger:(id)arg3 experimentManager:(id)arg4 previewConfiguration:(id)arg5;
- (void)refreshFilterAttachmentState;
- (void)setFilterAttachmentButtonHidden:(_Bool)arg1;

@end

