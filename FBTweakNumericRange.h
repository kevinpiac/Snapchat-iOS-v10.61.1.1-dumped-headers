//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface FBTweakNumericRange : NSObject <NSCoding>
{
    id _minimumValue;
    id _maximumValue;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2;
@property(retain, nonatomic) id maximumValue; // @synthesize maximumValue=_maximumValue;
@property(retain, nonatomic) id minimumValue; // @synthesize minimumValue=_minimumValue;

@end

