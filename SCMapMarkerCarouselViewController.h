//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCMapCarouselContainerViewDelegate-Protocol.h"
#import "SCMapMarkerCarouselPageDelegate-Protocol.h"

@class NSString, SCContextV2Session;
@protocol SCMapMarkerCarouselViewControllerDelegate;

@interface SCMapMarkerCarouselViewController : UIViewController <SCMapCarouselContainerViewDelegate, SCMapMarkerCarouselPageDelegate>
{
    SCContextV2Session *_contextSession;
    _Bool _hasSentInitialLoadDelegateMessage;
    id <SCMapMarkerCarouselViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)carousel;
@property(nonatomic) __weak id <SCMapMarkerCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithPoiID:(id)arg1 venueID:(id)arg2 contextV2Manager:(id)arg3 dependencyProvider:(id)arg4;
- (void)loadView;
- (void)mapCarouselContainerWantsDismissal:(id)arg1;
- (void)mapMarkerCarouselPage:(id)arg1 didFinishLoadingWithResult:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
