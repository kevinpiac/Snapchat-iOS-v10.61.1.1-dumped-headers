//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImpalaBusinessProfileBaseChatMessageRenderer.h"

#import "SCImpalaBusinessProfileSnapViewDelegate-Protocol.h"

@class IMPSharedBusinessProfileSnap, SCDataHandler;

@interface SCImpalaBusinessProfileSnapChatMessageRenderer : SCImpalaBusinessProfileBaseChatMessageRenderer <SCImpalaBusinessProfileSnapViewDelegate>
{
    IMPSharedBusinessProfileSnap *_sharedBusinessProfileSnap;
    SCDataHandler *_manifestHandler;
}

- (void).cxx_destruct;
- (void)_didLoadStoryManifest;
- (void)businessProfileSnapView:(id)arg1 didTapToPlayStoryManifest:(id)arg2 sourceView:(id)arg3;
- (void)configureView:(id)arg1;
- (id)initWithSharedBusinessProfileSnap:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;

@end

