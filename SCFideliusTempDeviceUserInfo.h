//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCEllipticCurveCrypto;

@interface SCFideliusTempDeviceUserInfo : NSObject
{
    NSString *_iwek;
    SCEllipticCurveCrypto *_beta;
    NSString *_hashedBeta;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCEllipticCurveCrypto *beta; // @synthesize beta=_beta;
@property(retain, nonatomic) NSString *hashedBeta; // @synthesize hashedBeta=_hashedBeta;
- (id)initWithIwek:(id)arg1 beta:(id)arg2;
@property(retain, nonatomic) NSString *iwek; // @synthesize iwek=_iwek;

@end

