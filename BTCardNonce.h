//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTPaymentMethodNonce.h"

@class BTBinData, NSString;

@interface BTCardNonce : BTPaymentMethodNonce
{
    long long _cardNetwork;
    NSString *_lastTwo;
    BTBinData *_binData;
}

+ (id)cardNonceWithJSON:(id)arg1;
+ (id)stringFromCardNetwork:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BTBinData *binData; // @synthesize binData=_binData;
@property(readonly, nonatomic) long long cardNetwork; // @synthesize cardNetwork=_cardNetwork;
- (id)initWithNonce:(id)arg1 description:(id)arg2 cardNetwork:(long long)arg3 lastTwo:(id)arg4 isDefault:(_Bool)arg5 cardJSON:(id)arg6;
@property(readonly, copy, nonatomic) NSString *lastTwo; // @synthesize lastTwo=_lastTwo;

@end

