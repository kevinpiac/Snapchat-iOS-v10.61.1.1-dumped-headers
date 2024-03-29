//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SCSpectaclesServerDevice <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) long long color;
@property(readonly, nonatomic) long long deviceNumber;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *firmwareVersion;
@property(readonly, nonatomic) long long firstPairedTimestamp;
@property(readonly, copy, nonatomic) NSString *hardwareVersion;
@property(readonly, nonatomic) long long lastNameUpdatedTimestamp;
@property(readonly, nonatomic) long long lastPairedStatusUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *serialNumber;
@end

