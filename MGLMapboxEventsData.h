//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MGLMapboxEventsData : NSObject
{
    NSString *_vendorId;
    NSString *_model;
    NSString *_iOSVersion;
    double _scale;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *iOSVersion; // @synthesize iOSVersion=_iOSVersion;
- (id)init;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSString *vendorId; // @synthesize vendorId=_vendorId;
- (id)sysInfoByName:(char *)arg1;

@end

