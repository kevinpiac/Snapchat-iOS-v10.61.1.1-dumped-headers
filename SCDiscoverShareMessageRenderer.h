//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageRenderer-Protocol.h"

@class SCChatSDKActionContext;

@interface SCDiscoverShareMessageRenderer : NSObject <SCChatMessageRenderer>
{
    SCChatSDKActionContext *_actionContext;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (id)createContentView;
- (void)didEndDisplayingContentView:(id)arg1;
- (void)prepareContentViewForReuse:(id)arg1;
- (id)reuseIdentifier;
- (void)setupContentView:(id)arg1;
- (struct CGSize)sizeThatFits:(double)arg1;
- (void)willDisplayContentView:(id)arg1;

@end

