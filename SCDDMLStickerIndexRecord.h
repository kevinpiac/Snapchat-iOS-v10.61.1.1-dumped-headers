//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class DdmlStickerIndex, NSDate;

@interface SCDDMLStickerIndexRecord : NSObject <NSCoding>
{
    DdmlStickerIndex *_stickerIndex;
    NSDate *_lastUpdated;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(retain, nonatomic) DdmlStickerIndex *stickerIndex; // @synthesize stickerIndex=_stickerIndex;

@end

