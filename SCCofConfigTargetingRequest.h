//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray, NSString, SCCofConnectivity;

@interface SCCofConfigTargetingRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *benchmarkResultsArray; // @dynamic benchmarkResultsArray;
@property(readonly, nonatomic) unsigned long long benchmarkResultsArray_Count; // @dynamic benchmarkResultsArray_Count;
@property(copy, nonatomic) NSString *configResultsEtag; // @dynamic configResultsEtag;
@property(retain, nonatomic) SCCofConnectivity *connectivity; // @dynamic connectivity;
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) _Bool deltaSync; // @dynamic deltaSync;
@property(copy, nonatomic) NSString *ghostId; // @dynamic ghostId;
@property(nonatomic) _Bool hasConnectivity; // @dynamic hasConnectivity;
@property(nonatomic) int maxVideoHeightPx; // @dynamic maxVideoHeightPx;
@property(nonatomic) int maxVideoWidthPx; // @dynamic maxVideoWidthPx;
@property(retain, nonatomic) GPBEnumArray *namespacesArray; // @dynamic namespacesArray;
@property(readonly, nonatomic) unsigned long long namespacesArray_Count; // @dynamic namespacesArray_Count;
@property(nonatomic) int screenHeight; // @dynamic screenHeight;
@property(nonatomic) int screenWidth; // @dynamic screenWidth;
@property(copy, nonatomic) NSString *userAgent; // @dynamic userAgent;

@end

