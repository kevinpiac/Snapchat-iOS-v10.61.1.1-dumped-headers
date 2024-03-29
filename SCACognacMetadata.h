//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCACognacMetadata : NSObject <NamedEvent, NSCopying>
{
    NSNumber *cognacMajorUpdateVersion;
    NSNumber *cognacMinorUpdateVersion;
    NSString *cognacId;
    NSString *cognacSessionId;
    NSString *cognacBuildId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCognacBuildId;
- (id)getCognacId;
- (long long)getCognacMajorUpdateVersion;
- (long long)getCognacMinorUpdateVersion;
- (id)getCognacSessionId;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (void)setCognacBuildId:(id)arg1;
- (void)setCognacId:(id)arg1;
- (void)setCognacMajorUpdateVersion:(long long)arg1;
- (void)setCognacMinorUpdateVersion:(long long)arg1;
- (void)setCognacSessionId:(id)arg1;

@end

