//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCFriendsFeedAutoRetryer, SCFriendsFeedRetryerServices, SCRetrySignalAnnouncerServices;

@interface SCFriendsFeedAutoRetryerEntryPoint : SCEntryPoint
{
    SCFriendsFeedAutoRetryer *_autoRetryer;
    SCFriendsFeedRetryerServices *_friendsFeedRetryServices;
    SCRetrySignalAnnouncerServices *_retrySignalAnnouncerServices;
}

- (void).cxx_destruct;
- (void)begin;
- (id)end;
@property(nonatomic) __weak SCFriendsFeedRetryerServices *friendsFeedRetryServices; // @synthesize friendsFeedRetryServices=_friendsFeedRetryServices;
@property(nonatomic) __weak SCRetrySignalAnnouncerServices *retrySignalAnnouncerServices; // @synthesize retrySignalAnnouncerServices=_retrySignalAnnouncerServices;

@end
