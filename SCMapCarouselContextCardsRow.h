//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapCarouselRow-Protocol.h"

@class NSArray, NSString, SCContextV2Session, SCEmbeddedContextCardsView, SCMapCarouselContextCardsCell, UIViewController;
@protocol SCEmbeddedContextCardsViewDelegate, SCMapCarouselRowHeightUpdatesObserver;

@interface SCMapCarouselContextCardsRow : NSObject <SCMapCarouselRow>
{
    SCContextV2Session *_session;
    UIViewController *_baseViewController;
    NSArray *_placeholderCardHeights;
    id <SCEmbeddedContextCardsViewDelegate> _cardsLoadingDelegate;
    SCEmbeddedContextCardsView *_cardsView;
    SCMapCarouselContextCardsCell *_cell;
    NSString *_reuseID;
    struct CGSize _cachedHeight;
    id <SCMapCarouselRowHeightUpdatesObserver> _heightUpdatesObserver;
}

- (void).cxx_destruct;
- (id)_createCardsViewIfNecessary;
- (void)_sizeChanged;
- (Class)cellClass;
- (void)didEndDisplayingCell:(id)arg1;
- (double)heightForWidth:(double)arg1;
@property(nonatomic) __weak id <SCMapCarouselRowHeightUpdatesObserver> heightUpdatesObserver; // @synthesize heightUpdatesObserver=_heightUpdatesObserver;
- (id)initWithSession:(id)arg1 baseViewController:(id)arg2 placeholderCardsHeights:(id)arg3 cardsLoadingDelegate:(id)arg4;
- (id)internalScrollLandingPositionOffsetsForWidth:(double)arg1;
- (id)reuseIdentifier;
- (void)updateCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

