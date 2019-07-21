//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (FastCoding)
+ (id)FC_aggregatePropertyKeys;
+ (id)fastCodingKeys;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void)FC_encodeWithCoder:(id)arg1;
- (id)awakeAfterFastCoding;
- (Class)classForFastCoding;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)didDecodeObject;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFastCoding;
- (_Bool)preferFasterCoding;
- (void)set3DTransform:(struct CATransform3D)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setAffineTransform:(struct CGAffineTransform)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setCMTime:(CDStruct_1b6d18a9)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setCMTimeMapping:(CDStruct_3800d160)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setCMTimeRange:(CDStruct_e83c9415)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setDouble:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat:(float)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setPoint:(struct CGPoint)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setRange:(struct _NSRange)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setRect:(struct CGRect)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt16:(short)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt8:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSize:(struct CGSize)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setUIEdgeInsets:(struct UIEdgeInsets)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setUInt16:(unsigned short)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setUInt32:(unsigned int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setUInt8:(unsigned char)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setVector:(struct CGVector)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)willEncodeObject;
@end

