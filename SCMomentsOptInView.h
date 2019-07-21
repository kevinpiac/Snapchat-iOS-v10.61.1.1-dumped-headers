//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCMomentsOptInEventCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableSet, NSString, SCGrowingButton, SCMomentsOptInModel, SCNetworkImageView, UICollectionView;
@protocol SCImageDownloading, SCMomentsOptInViewDelegate;

@interface SCMomentsOptInView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, SCMomentsOptInEventCollectionViewCellDelegate>
{
    SCMomentsOptInModel *_optInModel;
    SCNetworkImageView *_headerImageView;
    UICollectionView *_eventsCollectionView;
    SCGrowingButton *_closeButton;
    _Bool _allEventsSelected;
    NSMutableSet *_selectedEvents;
    id <SCMomentsOptInViewDelegate> _delegate;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (void)_didSwipeDown:(id)arg1;
- (void)_didTapCloseButton:(id)arg1;
- (void)_handleAllEventsSubscriptionUpdate:(_Bool)arg1;
- (void)_handleEventSubscriptionUpdate:(_Bool)arg1 optInModel:(id)arg2;
- (void)_handleSubscriptionUpdateFailure:(_Bool)arg1 optInEvent:(id)arg2;
- (void)_setupPickerCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak id <SCMomentsOptInViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (unsigned long long)numberOfAvailableOptIns;
- (unsigned long long)numberOfOptInsSubscribed;
- (void)optInEventCollectionViewCell:(id)arg1 didUpdateSubscription:(_Bool)arg2;
- (void)setCloseButtonVisibility:(_Bool)arg1;
- (void)updateWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

