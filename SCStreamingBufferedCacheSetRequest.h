//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCStreamingBufferedCacheSetRequest : NSObject
{
    NSString *_uuid;
    id _obj;
    CDUnknownBlockType _dataEncodingBlock;
    NSDate *_expiration;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dataEncodingBlock; // @synthesize dataEncodingBlock=_dataEncodingBlock;
@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

@end

