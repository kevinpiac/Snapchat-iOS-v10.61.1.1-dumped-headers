//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiBuilderListener-Protocol.h"
#import "SCBitmojiFashionPresenting-Protocol.h"

@class NSMutableArray, NSString, SCQueuePerformer, SCUserSession, UINavigationController;

@interface SCBitmojiFashionPresenter : NSObject <SCBitmojiBuilderListener, SCBitmojiFashionPresenting>
{
    SCUserSession *_userSession;
    UINavigationController *_navigationController;
    NSMutableArray *_pendingCompletions;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)dismiss;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isBitmojiFashionPreparedToPresent;
- (void)outfitPackDidChange;
- (void)prepareBitmojiFashionWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentBitmojiFashionFromPage:(unsigned long long)arg1 navigationController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

