//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SOJUIdentityCreateMischiefsRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSArray *_createMischiefRequests;
}

+ (id)withJUIdentityCreateMischiefsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCreateMischiefRequests:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setUsername:(id)arg1;

@end

