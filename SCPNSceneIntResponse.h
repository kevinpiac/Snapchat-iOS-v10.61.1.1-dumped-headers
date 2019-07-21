//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32ObjectDictionary, NSData, NSString, SCPNAmazonResponse, SCPNDebugInfoResponse, SCPNDogScanner, SCPNGiphyResponse, SCPNPhotoMath, SCPNSyteResponse, SCULLensResponse;

@interface SCPNSceneIntResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCPNAmazonResponse *amazon; // @dynamic amazon;
@property(retain, nonatomic) GPBInt32ObjectDictionary *assetSuggestions; // @dynamic assetSuggestions;
@property(readonly, nonatomic) unsigned long long assetSuggestions_Count; // @dynamic assetSuggestions_Count;
@property(retain, nonatomic) SCPNDebugInfoResponse *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) SCPNDogScanner *dogScanner; // @dynamic dogScanner;
@property(retain, nonatomic) SCPNGiphyResponse *giphy; // @dynamic giphy;
@property(copy, nonatomic) NSData *gtqServeResponse; // @dynamic gtqServeResponse;
@property(nonatomic) _Bool hasAmazon; // @dynamic hasAmazon;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasDogScanner; // @dynamic hasDogScanner;
@property(nonatomic) _Bool hasGiphy; // @dynamic hasGiphy;
@property(nonatomic) _Bool hasLenses; // @dynamic hasLenses;
@property(nonatomic) _Bool hasPhotoMath; // @dynamic hasPhotoMath;
@property(nonatomic) _Bool hasSyte; // @dynamic hasSyte;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCULLensResponse *lenses; // @dynamic lenses;
@property(retain, nonatomic) SCPNPhotoMath *photoMath; // @dynamic photoMath;
@property(retain, nonatomic) SCPNSyteResponse *syte; // @dynamic syte;

@end

