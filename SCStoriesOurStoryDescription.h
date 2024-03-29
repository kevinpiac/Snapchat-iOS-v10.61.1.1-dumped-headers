//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesOurStoryDescription : SCDocObject <NSCopying>
{
    NSString *_storyGroupId;
    NSString *_ourStoryDescription;
    NSString *_autoAddedFriendDescription;
    NSString *_friendDescription;
    NSString *_sharedPostAlertTitle;
    NSString *_sharedPostAlertBody;
    NSString *_viewJITAlertTitle;
    NSString *_viewJITAlertBody;
    NSString *_sharedAttributionBody;
    double _lastRetrievedTimestamp;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *autoAddedFriendDescription; // @synthesize autoAddedFriendDescription=_autoAddedFriendDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *friendDescription; // @synthesize friendDescription=_friendDescription;
- (unsigned long long)hash;
- (id)initWithStoryGroupId:(id)arg1 ourStoryDescription:(id)arg2 autoAddedFriendDescription:(id)arg3 friendDescription:(id)arg4 sharedPostAlertTitle:(id)arg5 sharedPostAlertBody:(id)arg6 viewJITAlertTitle:(id)arg7 viewJITAlertBody:(id)arg8 sharedAttributionBody:(id)arg9 lastRetrievedTimestamp:(double)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double lastRetrievedTimestamp; // @synthesize lastRetrievedTimestamp=_lastRetrievedTimestamp;
@property(readonly, copy, nonatomic) NSString *ourStoryDescription; // @synthesize ourStoryDescription=_ourStoryDescription;
@property(readonly, copy, nonatomic) NSString *sharedAttributionBody; // @synthesize sharedAttributionBody=_sharedAttributionBody;
@property(readonly, copy, nonatomic) NSString *sharedPostAlertBody; // @synthesize sharedPostAlertBody=_sharedPostAlertBody;
@property(readonly, copy, nonatomic) NSString *sharedPostAlertTitle; // @synthesize sharedPostAlertTitle=_sharedPostAlertTitle;
@property(readonly, copy, nonatomic) NSString *storyGroupId; // @synthesize storyGroupId=_storyGroupId;
@property(readonly, copy, nonatomic) NSString *viewJITAlertBody; // @synthesize viewJITAlertBody=_viewJITAlertBody;
@property(readonly, copy, nonatomic) NSString *viewJITAlertTitle; // @synthesize viewJITAlertTitle=_viewJITAlertTitle;

@end

