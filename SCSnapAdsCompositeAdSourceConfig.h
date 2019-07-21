//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapAdsAdSourceConfig;

@interface SCSnapAdsCompositeAdSourceConfig : NSObject <NSCopying>
{
    SCSnapAdsAdSourceConfig *_primaryAdSourceConfig;
    SCSnapAdsAdSourceConfig *_shadowAdSourceConfig;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithPrimaryAdSourceConfig:(id)arg1 shadowAdSourceConfig:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSnapAdsAdSourceConfig *primaryAdSourceConfig; // @synthesize primaryAdSourceConfig=_primaryAdSourceConfig;
@property(readonly, copy, nonatomic) SCSnapAdsAdSourceConfig *shadowAdSourceConfig; // @synthesize shadowAdSourceConfig=_shadowAdSourceConfig;

@end

