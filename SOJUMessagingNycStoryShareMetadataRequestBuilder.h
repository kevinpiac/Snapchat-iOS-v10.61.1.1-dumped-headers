//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOJUMessagingNycStoryShareMetadataRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_storyId;
    NSString *_sssId;
}

+ (id)withJUMessagingNycStoryShareMetadataRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setReqToken:(id)arg1;
- (id)setSssId:(id)arg1;
- (id)setStoryId:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setUsername:(id)arg1;

@end

