//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface SCGalleryDataMutationInfo : NSObject
{
    _Bool _deviceFull;
    _Bool _autosave;
    _Bool _badMedia;
    double _quotaUsage;
    NSError *_error;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool autosave; // @synthesize autosave=_autosave;
@property(nonatomic) _Bool badMedia; // @synthesize badMedia=_badMedia;
@property(nonatomic) _Bool deviceFull; // @synthesize deviceFull=_deviceFull;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double quotaUsage; // @synthesize quotaUsage=_quotaUsage;

@end
