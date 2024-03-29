//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SCSession <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) double endTime;
@property(readonly, nonatomic) long long exitEvent;
@property(readonly, nonatomic) double lastCameraOnTime;
@property(readonly, nonatomic) double lastGPSOnTime;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *previousSessionName;
@property(readonly, copy, nonatomic) NSString *referrer;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) double totalCameraOnTime;
@property(readonly, nonatomic) double totalGPSOnTime;
@property(readonly, copy, nonatomic) NSString *type;
@end

