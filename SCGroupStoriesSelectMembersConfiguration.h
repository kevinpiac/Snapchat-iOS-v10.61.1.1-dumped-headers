//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCSendToConfiguration, SCSendToTransitionProvider;
@protocol SCGroupStorySelectMembersViewControllerDelegate;

@interface SCGroupStoriesSelectMembersConfiguration : NSObject
{
    _Bool _editing;
    _Bool _selectingPosters;
    SCSendToConfiguration *_sendToConfiguration;
    SCSendToTransitionProvider *_transitionProvider;
    long long _createType;
    long long _storyType;
    NSArray *_posterIdsPermitted;
    NSArray *_viewerIdsPermitted;
    id <SCGroupStorySelectMembersViewControllerDelegate> _selectionDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long createType; // @synthesize createType=_createType;
@property(readonly, nonatomic) _Bool editing; // @synthesize editing=_editing;
- (id)initWithSendToConfig:(id)arg1 transitionProvider:(id)arg2 createType:(long long)arg3 storyType:(long long)arg4 posterIdsPermitted:(id)arg5 viewerIdsPermitted:(id)arg6 selectionDelegate:(id)arg7 selectingPosters:(_Bool)arg8 editing:(_Bool)arg9;
@property(readonly, copy, nonatomic) NSArray *posterIdsPermitted; // @synthesize posterIdsPermitted=_posterIdsPermitted;
@property(readonly, nonatomic) _Bool selectingPosters; // @synthesize selectingPosters=_selectingPosters;
@property(readonly, copy, nonatomic) id <SCGroupStorySelectMembersViewControllerDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(readonly, copy, nonatomic) SCSendToConfiguration *sendToConfiguration; // @synthesize sendToConfiguration=_sendToConfiguration;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) SCSendToTransitionProvider *transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(readonly, copy, nonatomic) NSArray *viewerIdsPermitted; // @synthesize viewerIdsPermitted=_viewerIdsPermitted;

@end

