//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedStoryLoggingInfo;

@interface SCDiscoverFeedPresentFriendMiniProfileActionDataModel : NSObject <NSCopying>
{
    NSString *_username;
    SCDiscoverFeedStoryLoggingInfo *_loggingInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithUsername:(id)arg1 loggingInfo:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryLoggingInfo *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end
