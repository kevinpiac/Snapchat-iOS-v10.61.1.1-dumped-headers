//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, SCSnapAdsIdentifier;

@interface SCAdWebviewInteractionUpdate : NSObject <NSCopying>
{
    _Bool _loadedOnEntry;
    _Bool _loadedOnExit;
    SCSnapAdsIdentifier *_adIdentifier;
    long long _snapIndex;
    double _visiblePageLoadTimeSeconds;
    NSNumber *_interactionZoneItemIndex;
    long long _viewedDurationInMillis;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAdIdentifier:(id)arg1 snapIndex:(long long)arg2 loadedOnEntry:(_Bool)arg3 loadedOnExit:(_Bool)arg4 visiblePageLoadTimeSeconds:(double)arg5 interactionZoneItemIndex:(id)arg6 viewedDurationInMillis:(long long)arg7;
@property(readonly, copy, nonatomic) NSNumber *interactionZoneItemIndex; // @synthesize interactionZoneItemIndex=_interactionZoneItemIndex;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool loadedOnEntry; // @synthesize loadedOnEntry=_loadedOnEntry;
@property(readonly, nonatomic) _Bool loadedOnExit; // @synthesize loadedOnExit=_loadedOnExit;
@property(readonly, nonatomic) long long snapIndex; // @synthesize snapIndex=_snapIndex;
@property(readonly, nonatomic) long long viewedDurationInMillis; // @synthesize viewedDurationInMillis=_viewedDurationInMillis;
@property(readonly, nonatomic) double visiblePageLoadTimeSeconds; // @synthesize visiblePageLoadTimeSeconds=_visiblePageLoadTimeSeconds;

@end
