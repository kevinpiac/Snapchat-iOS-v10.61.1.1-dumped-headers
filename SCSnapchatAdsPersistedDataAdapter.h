//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAdsPersistedDataAdapter-Protocol.h"

@interface SCSnapchatAdsPersistedDataAdapter : NSObject <SCSnapAdsPersistedDataAdapter>
{
}

- (id)getAdSessionId;
- (id)getAdSourceConfig;
- (id)getAdvertiserId;
- (id)getRawUserData;
- (id)getRawUserDataV2;
- (id)getUserPixelToken;
- (id)getUserSecId;
- (void)setAdSessionId:(id)arg1;
- (void)setAdSourceConfig:(id)arg1;
- (void)setAdvertiserId:(id)arg1;
- (void)setUserPixelToken:(id)arg1;
- (void)setUserSecId:(id)arg1;

@end

