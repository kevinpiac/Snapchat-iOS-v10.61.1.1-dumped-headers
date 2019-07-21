//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchIntent-Protocol.h"

@class FriendStories, NSString, SCSearchCellController, UIView;

@interface SCSearchFriendStoryPlayIntent : NSObject <SCSearchIntent>
{
    _Bool _isCircleTransition;
    FriendStories *_friendStories;
    UIView *_sourceView;
    unsigned long long _viewLocationPosition;
    SCSearchCellController *_cellController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCSearchCellController *cellController; // @synthesize cellController=_cellController;
@property(retain, nonatomic) FriendStories *friendStories; // @synthesize friendStories=_friendStories;
- (id)initWithSourceView:(id)arg1 withFriendStories:(id)arg2;
- (id)initWithSourceView:(id)arg1 withFriendStories:(id)arg2 viewLocationPosition:(unsigned long long)arg3;
- (id)initWithSourceView:(id)arg1 withFriendStories:(id)arg2 viewLocationPosition:(unsigned long long)arg3 isCircleTransition:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isCircleTransition; // @synthesize isCircleTransition=_isCircleTransition;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) unsigned long long viewLocationPosition; // @synthesize viewLocationPosition=_viewLocationPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

