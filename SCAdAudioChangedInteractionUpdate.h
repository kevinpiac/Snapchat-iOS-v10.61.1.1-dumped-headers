//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapAdsIdentifier;

@interface SCAdAudioChangedInteractionUpdate : NSObject <NSCopying>
{
    SCSnapAdsIdentifier *_adIdentifier;
    long long _snapIndex;
    double _audioOutputVolume;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(readonly, nonatomic) double audioOutputVolume; // @synthesize audioOutputVolume=_audioOutputVolume;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAdIdentifier:(id)arg1 snapIndex:(long long)arg2 audioOutputVolume:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long snapIndex; // @synthesize snapIndex=_snapIndex;

@end

