//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEditGroupNameAlertDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SCLazy;

@interface SCEditGroupNameAlertViewController : NSObject <SCEditGroupNameAlertDelegate, UITextFieldDelegate>
{
    SCLazy *_editGroupNameAlert;
    SCLazy *_groupsDataMutator;
    SCLazy *_groupsDataFetcher;
}

- (void).cxx_destruct;
- (void)_didPressEditNameButtonForGroup:(id)arg1 inAlertFlow:(id)arg2;
- (void)handleEditGroupName:(id)arg1 groupId:(id)arg2;
- (id)init;
- (void)presentEditGroupNameAlertViewForGroupId:(id)arg1 inAlertFlow:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

