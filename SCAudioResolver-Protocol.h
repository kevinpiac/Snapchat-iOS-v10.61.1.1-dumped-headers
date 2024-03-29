//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCAudioConfiguration;
@protocol SCProximityStatus;

@protocol SCAudioResolver <NSObject>
- (NSString *)configurationDebugInfo;
- (SCAudioConfiguration *)getCurrentResolvedConfiguration;
@property(retain, nonatomic) id <SCProximityStatus> proximityStatus;
- (SCAudioConfiguration *)relinquishConfiguration:(SCAudioConfiguration *)arg1;
- (SCAudioConfiguration *)resolveConfiguration:(SCAudioConfiguration *)arg1;
@end

