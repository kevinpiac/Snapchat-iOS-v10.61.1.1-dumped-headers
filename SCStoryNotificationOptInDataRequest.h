//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoryNotificationOptInDataRequest : NSObject <NSCopying>
{
    _Bool _isPublisher;
    _Bool _isOptingIn;
    NSString *_userId;
    NSString *_optInEntityId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 optInEntityId:(id)arg2 isPublisher:(_Bool)arg3 isOptingIn:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isOptingIn; // @synthesize isOptingIn=_isOptingIn;
@property(readonly, nonatomic) _Bool isPublisher; // @synthesize isPublisher=_isPublisher;
@property(readonly, copy, nonatomic) NSString *optInEntityId; // @synthesize optInEntityId=_optInEntityId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;

@end

