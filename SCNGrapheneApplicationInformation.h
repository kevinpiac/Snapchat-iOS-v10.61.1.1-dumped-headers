//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCNGrapheneApplicationInformation : NSObject
{
    NSString *_build;
    NSString *_flavor;
    long long _osType;
    NSString *_variant;
}

+ (id)ApplicationInformationWithBuild:(id)arg1 flavor:(id)arg2 osType:(long long)arg3 variant:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *build; // @synthesize build=_build;
- (id)description;
@property(readonly, nonatomic) NSString *flavor; // @synthesize flavor=_flavor;
- (id)initWithBuild:(id)arg1 flavor:(id)arg2 osType:(long long)arg3 variant:(id)arg4;
@property(readonly, nonatomic) long long osType; // @synthesize osType=_osType;
@property(readonly, nonatomic) NSString *variant; // @synthesize variant=_variant;

@end

