/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSViewServiceResponse : NSObject <NSCopying, NSSecureCoding> {
    VSAccountMetadata * _accountMetadata;
}

@property (nonatomic, copy) VSAccountMetadata *accountMetadata;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAccountMetadata:(id)arg1;

@end