//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileSectionController.h"

#import "SCGroupMiniProfileGroupStoryCellDelegate-Protocol.h"
#import "SCMiniProfileOptionRowControllerDelegate-Protocol.h"

@class NSString, SCUserSession;
@protocol SCChatGroup, SCMiniProfileGroupStorySectionControllerDelegate;

@interface SCGroupMiniProfileGroupStorySectionController : SCMiniProfileSectionController <SCGroupMiniProfileGroupStoryCellDelegate, SCMiniProfileOptionRowControllerDelegate>
{
    id <SCChatGroup> _group;
    id <SCMiniProfileGroupStorySectionControllerDelegate> _delegate;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCMiniProfileGroupStorySectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleAvatarTapped:(id)arg1 friendStories:(id)arg2 avatar:(id)arg3;
- (void)handleCellTapped;
- (id)initWithGroup:(id)arg1 userSession:(id)arg2 delegate:(id)arg3;
- (long long)numberOfRows;
- (void)optionRowControllerDidSelect:(id)arg1;
- (id)rowControllerAtIndex:(long long)arg1;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

