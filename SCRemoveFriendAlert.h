//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Friend;
@protocol SCRemoveFriendAlertDelegate;

@interface SCRemoveFriendAlert : NSObject
{
    id <SCRemoveFriendAlertDelegate> _removeFriendAlertDelegate;
    Friend *_friendEditing;
}

- (void).cxx_destruct;
- (void)customOperationForDeleteorIgnore:(id)arg1;
- (void)didPressRemoveFriendButton:(id)arg1;
@property(retain, nonatomic) Friend *friendEditing; // @synthesize friendEditing=_friendEditing;
@property(nonatomic) __weak id <SCRemoveFriendAlertDelegate> removeFriendAlertDelegate; // @synthesize removeFriendAlertDelegate=_removeFriendAlertDelegate;

@end

