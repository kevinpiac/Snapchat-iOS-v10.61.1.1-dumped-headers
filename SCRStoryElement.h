//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCRAdInfo, SCRGeoLocation, SCRStoryElementDebug, SCRStoryElement_HtmlInfo, SCRStoryElement_SnapInfo, SCRStoryElement_WebMediaInfo, SCRUserAction;

@interface SCRStoryElement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCRAdInfo *adInfo; // @dynamic adInfo;
@property(readonly, nonatomic) int contentInfoOneOfCase; // @dynamic contentInfoOneOfCase;
@property(nonatomic) int contentType; // @dynamic contentType;
@property(retain, nonatomic) SCRStoryElementDebug *debugInfo; // @dynamic debugInfo;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic) _Bool hasAdInfo; // @dynamic hasAdInfo;
@property(nonatomic) _Bool hasDebugInfo; // @dynamic hasDebugInfo;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasPressAndHoldAction; // @dynamic hasPressAndHoldAction;
@property(nonatomic) _Bool hasSwipeDownAction; // @dynamic hasSwipeDownAction;
@property(nonatomic) _Bool hasSwipeLeftAction; // @dynamic hasSwipeLeftAction;
@property(nonatomic) _Bool hasSwipeRightAction; // @dynamic hasSwipeRightAction;
@property(nonatomic) _Bool hasSwipeUpAction; // @dynamic hasSwipeUpAction;
@property(nonatomic) _Bool hasTapAction; // @dynamic hasTapAction;
@property(retain, nonatomic) SCRStoryElement_HtmlInfo *htmlInfo; // @dynamic htmlInfo;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) SCRGeoLocation *location; // @dynamic location;
@property(nonatomic) _Bool loop; // @dynamic loop;
@property(nonatomic) int minimumDurationMs; // @dynamic minimumDurationMs;
@property(copy, nonatomic) NSString *placeId; // @dynamic placeId;
@property(copy, nonatomic) NSString *placeName; // @dynamic placeName;
@property(nonatomic) int prefetchTtlMs; // @dynamic prefetchTtlMs;
@property(retain, nonatomic) SCRUserAction *pressAndHoldAction; // @dynamic pressAndHoldAction;
@property(retain, nonatomic) NSMutableArray *relatedDynamicStoryIdsArray; // @dynamic relatedDynamicStoryIdsArray;
@property(readonly, nonatomic) unsigned long long relatedDynamicStoryIdsArray_Count; // @dynamic relatedDynamicStoryIdsArray_Count;
@property(nonatomic) _Bool shouldPrefetch; // @dynamic shouldPrefetch;
@property(copy, nonatomic) NSString *snapCaption; // @dynamic snapCaption;
@property(retain, nonatomic) SCRStoryElement_SnapInfo *snapInfo; // @dynamic snapInfo;
@property(copy, nonatomic) NSString *sssId; // @dynamic sssId;
@property(nonatomic) long long sunriseTimestamp; // @dynamic sunriseTimestamp;
@property(nonatomic) long long sunsetTimestamp; // @dynamic sunsetTimestamp;
@property(retain, nonatomic) SCRUserAction *swipeDownAction; // @dynamic swipeDownAction;
@property(retain, nonatomic) SCRUserAction *swipeLeftAction; // @dynamic swipeLeftAction;
@property(retain, nonatomic) SCRUserAction *swipeRightAction; // @dynamic swipeRightAction;
@property(retain, nonatomic) SCRUserAction *swipeUpAction; // @dynamic swipeUpAction;
@property(retain, nonatomic) SCRUserAction *tapAction; // @dynamic tapAction;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(nonatomic) int version; // @dynamic version;
@property(retain, nonatomic) SCRStoryElement_WebMediaInfo *webMediaInfo; // @dynamic webMediaInfo;

@end

