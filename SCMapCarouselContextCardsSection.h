//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEmbeddedContextCardsViewDelegate-Protocol.h"
#import "SCMapCarouselSection-Protocol.h"

@class NSString, SCMapCarouselContextCardsRow;
@protocol SCMapCarouselContextCardsSectionLoadingDelegate, SCMapCarouselSectionDelegate;

@interface SCMapCarouselContextCardsSection : NSObject <SCEmbeddedContextCardsViewDelegate, SCMapCarouselSection>
{
    SCMapCarouselContextCardsRow *_row;
    id <SCMapCarouselSectionDelegate> _delegate;
    id <SCMapCarouselContextCardsSectionLoadingDelegate> _contextCardsLoadingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCMapCarouselContextCardsSectionLoadingDelegate> contextCardsLoadingDelegate; // @synthesize contextCardsLoadingDelegate=_contextCardsLoadingDelegate;
@property(nonatomic) __weak id <SCMapCarouselSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)embeddedContextCards:(id)arg1 didFinishLoadingWithResult:(long long)arg2;
- (id)initWithContextSession:(id)arg1 baseViewController:(id)arg2 placeholderCardsHeights:(id)arg3;
- (id)rows;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
