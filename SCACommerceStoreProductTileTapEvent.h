//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCACommerceStoreCategoryEventBase.h"

@class NSNumber, NSString;

@interface SCACommerceStoreProductTileTapEvent : SCACommerceStoreCategoryEventBase
{
    NSNumber *tileRow;
    NSNumber *tileColumn;
    NSString *tileProductId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getTileColumn;
- (id)getTileProductId;
- (long long)getTileRow;
- (void)setTileColumn:(long long)arg1;
- (void)setTileProductId:(id)arg1;
- (void)setTileRow:(long long)arg1;

@end

